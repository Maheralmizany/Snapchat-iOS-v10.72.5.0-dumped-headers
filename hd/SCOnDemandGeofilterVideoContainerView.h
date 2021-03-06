//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray;

@interface SCOnDemandGeofilterVideoContainerView : UIView
{
    id <SCOnDemandGeofilterSessionProtocol> _geofilterSession;
    NSMutableArray *_playerViewArray;
    _Bool _enableFullSize;
    unsigned long long currentVideoIndex;
    _Bool _videoPaused;
    id <SCOnDemandGeofilterVideoContainerViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SCOnDemandGeofilterVideoContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didBecomeActive:(id)arg1;
- (void)_willResignActive:(id)arg1;
- (void)_playerItemDidReachEnd:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_fetchVideoWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)resumePlayback;
- (void)pausePlayback;
- (void)layoutSubviews;
- (void)setFullSizeEnable:(_Bool)arg1;
- (void)setupWithVideoUrls:(id)arg1 geofilterSession:(id)arg2;

@end

