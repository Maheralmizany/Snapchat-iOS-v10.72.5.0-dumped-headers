//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSnapWatermarkOverlayLayout.h"

@class NSString;

@interface SCSnapWatermarkOverlayLayout : NSObject <SCSnapWatermarkOverlayLayout>
{
    struct CGAffineTransform _contentScaleTransform;
}

@property(nonatomic) struct CGAffineTransform contentScaleTransform; // @synthesize contentScaleTransform=_contentScaleTransform;
@property(readonly, nonatomic) struct CGRect subtitleRect;
@property(readonly, nonatomic) struct CGRect titleRect;
@property(readonly, nonatomic) struct CGRect watermarkTextRect;
@property(readonly, nonatomic) struct CGRect watermarkImageRect;
- (void)updateContentSize:(struct CGSize)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

