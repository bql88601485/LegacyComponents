#import <Foundation/Foundation.h>

#import <LegacyComponents/TGRootControllerProtocol.h>

@class TGLocalization;
@class UIViewController;

@protocol LegacyComponentsGlobalsProvider <NSObject>

- (TGLocalization *)effectiveLocalization;
- (void)log:(NSString *)format :(va_list)args;
- (UIViewController<TGRootControllerProtocol> *)rootController;
- (NSArray<UIWindow *> *)applicationWindows;
- (UIWindow *)applicationStatusBarWindow;
- (UIWindow *)applicationKeyboardWindow;

- (CGRect)statusBarFrame;
- (bool)isStatusBarHidden;
- (void)setStatusBarHidden:(BOOL)hidden withAnimation:(UIStatusBarAnimation)animation;
- (UIStatusBarStyle)statusBarStyle;
- (void)setStatusBarStyle:(UIStatusBarStyle)statusBarStyle animated:(BOOL)animated;
- (void)forceStatusBarAppearanceUpdate;

- (void)disableUserInteractionFor:(NSTimeInterval)timeInterval;

@end

@interface LegacyComponentsGlobals : NSObject

+ (void)setProvider:(id<LegacyComponentsGlobalsProvider>)provider;
+ (id<LegacyComponentsGlobalsProvider>)provider;

@end
