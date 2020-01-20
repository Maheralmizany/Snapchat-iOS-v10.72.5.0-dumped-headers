//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCBandwidthEstimatorListener.h"

@class NSString, UILabel, UIView;

@interface SCBandwidthDebugView : NSObject <SCBandwidthEstimatorListener>
{
    UIView *_containerView;
    UILabel *_bandwidthLabel;
    long long _downloadBandwidth;
    long long _uploadBandwidth;
}

+ (id)shared;
- (void).cxx_destruct;
- (id)_strFromBandwidthInbps:(long long)arg1;
- (void)_updateBandwidthLabel;
- (void)uploadBandwidthDidChange:(long long)arg1;
- (void)downloadBandwidthDidChange:(long long)arg1;
- (void)hide;
- (void)show;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
