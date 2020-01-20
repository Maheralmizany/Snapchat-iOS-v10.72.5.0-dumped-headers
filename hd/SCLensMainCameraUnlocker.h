//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLensUnlockerProtocol.h"

@class NSString, UIViewController;

@interface SCLensMainCameraUnlocker : NSObject <SCLensUnlockerProtocol>
{
    UIViewController *_viewController;
    id <SCLensUnlockerProtocol> _lensUnlocker;
    id <SCFeatureLensCarousel> _lensCarouselFeature;
    id <NavigationDelegate> _navigationDelegate;
}

- (void).cxx_destruct;
- (void)performAction:(id)arg1 completion:(CDUnknownBlockType)arg2 completionQueue:(id)arg3;
- (id)initWithLensUnlocker:(id)arg1 fromViewController:(id)arg2 lensCarouselFeature:(id)arg3 navigationDelegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

