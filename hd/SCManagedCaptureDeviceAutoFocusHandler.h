//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCManagedCaptureDeviceFocusHandler.h"

@class AVCaptureDevice, NSString;

@interface SCManagedCaptureDeviceAutoFocusHandler : NSObject <SCManagedCaptureDeviceFocusHandler>
{
    _Bool _isContinuousAutofocus;
    _Bool _isFocusLock;
    AVCaptureDevice *_device;
    struct CGPoint _focusPointOfInterest;
}

@property(nonatomic) _Bool isFocusLock; // @synthesize isFocusLock=_isFocusLock;
@property(nonatomic) _Bool isContinuousAutofocus; // @synthesize isContinuousAutofocus=_isContinuousAutofocus;
@property(retain, nonatomic) AVCaptureDevice *device; // @synthesize device=_device;
@property(nonatomic) struct CGPoint focusPointOfInterest; // @synthesize focusPointOfInterest=_focusPointOfInterest;
- (void).cxx_destruct;
- (void)setSmoothFocus:(_Bool)arg1;
- (void)setFocusLock:(_Bool)arg1;
- (void)continuousAutofocus;
- (void)setAutofocusPointOfInterest:(struct CGPoint)arg1;
- (id)initWithDevice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

