//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCImpalaShowProfilePresenterDelegate.h"

@class NSString, SCCameraViewController, SCDisposableObserverLifecycle;

@interface SCImpalaShowProfilePresenterCameraDelegate : NSObject <SCImpalaShowProfilePresenterDelegate>
{
    SCCameraViewController *_cameraViewController;
    SCDisposableObserverLifecycle *_appLifecycle;
    long long _applicationState;
}

- (void).cxx_destruct;
- (void)showProfilePresenterDidFinishDismissing:(id)arg1;
- (void)showProfilePresenterDidStartPresenting:(id)arg1;
- (void)_observeAppLifecycle;
- (id)initWithCameraViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

