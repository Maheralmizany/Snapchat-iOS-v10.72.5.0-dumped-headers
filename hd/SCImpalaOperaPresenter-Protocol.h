//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCStoryManifest, SCUserSession, UIView, UIViewController<SCPageNameLogging>;

@protocol SCImpalaOperaPresenter <NSObject>
@property(nonatomic) __weak id <SCImpalaOperaPresenterDelegate> delegate;
- (void)playStoryManifest:(SCStoryManifest *)arg1 businessId:(NSString *)arg2 presentingViewController:(UIViewController<SCPageNameLogging> *)arg3 sourceView:(UIView *)arg4 useCircleTransition:(_Bool)arg5 playUnviewedOnly:(_Bool)arg6 userSession:(SCUserSession *)arg7 navigationDelegate:(id <NavigationDelegate>)arg8;
@end
