//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "SCEventAnnouncing.h"

@class NSString, UIViewController, UIViewController<SCPageNameLogging>;

@protocol SCActionMenuPresenting <NSObject, SCEventAnnouncing>
@property(nonatomic) __weak id <SCUnifiedActionMenuPresenterDelegate> delegate;
- (UIViewController *)presentingViewController;
- (UIViewController<SCPageNameLogging> *)presentedViewController;
- (void)popActionSheetView;
- (void)dismissMenuViewWithAnimation:(_Bool)arg1 completion:(void (^)(void))arg2;
- (void)presentNestedMenuView:(id <SCActionMenuPresenting>)arg1;
- (void)presentMenuViewWithPresentingViewController:(UIViewController *)arg1 completion:(void (^)(void))arg2;
- (void)presentMenuViewWithPresentingViewController:(UIViewController *)arg1;
- (id)initWithMenuViewDataProvider:(id <SCUnifiedActionMenuDataProvider>)arg1 actionHandler:(id <SCActionHandling>)arg2 imageDownloader:(id <SCImageDownloading>)arg3 sourcePageType:(NSString *)arg4;
@end
