//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCScanFrameModifier.h"

@class NSString;

@interface SCScanCropScaleFrameModifier : NSObject <SCScanFrameModifier>
{
    struct CGRect _cropRect;
    struct CGSize _scaleToFitSize;
}

- (id)modifyFrame:(id)arg1;
- (id)initWithCropRect:(struct CGRect)arg1 scaleToFitSize:(struct CGSize)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

