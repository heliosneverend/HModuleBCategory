//
//  HMediator.h
//  FBSnapshotTestCase
//
//  Created by helios on 2020/12/16.
//
#import <UIKit/UIKit.h>
extern NSString * _Nullable const kHMediatorParamsKeySwiftTargetModuleName;

NS_ASSUME_NONNULL_BEGIN

@interface HMediator : NSObject
+ (instancetype)sharedInstance;

// 远程App调用入口
- (id)performActionWithUrl:(NSURL *)url completion:(void(^)(NSDictionary *info))completion;
// 本地组件调用入口
- (id)performTarget:(NSString *)targetName action:(NSString *)actionName params:(NSDictionary *)params shouldCacheTarget:(BOOL)shouldCacheTarget;
- (void)releaseCachedTargetWithTargetName:(NSString *)targetName;

- (UIViewController *)ModuleB_viewControllerWithCallback:(void(^)(NSString *result))callback;
@end

NS_ASSUME_NONNULL_END
