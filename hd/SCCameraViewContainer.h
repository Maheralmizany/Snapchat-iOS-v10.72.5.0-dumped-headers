//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCCameraViewContaining.h"

@class NSString, UIViewController;

@interface SCCameraViewContainer : NSObject <SCCameraViewContaining>
{
    UIViewController *_presentingViewController;
}

- (void).cxx_destruct;
- (id)presentingViewController;
- (void)setCameraViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithPresentingViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
