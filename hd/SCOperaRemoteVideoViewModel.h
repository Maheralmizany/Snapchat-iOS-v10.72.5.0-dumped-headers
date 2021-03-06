//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, SCOperaPlayerViewModel, SCOperaVideoControlsViewModel;

@interface SCOperaRemoteVideoViewModel : NSObject <NSCopying>
{
    _Bool _hideFirstFrameImageView;
    _Bool _showActivityIndicator;
    NSArray *_attributedCaptions;
    SCOperaVideoControlsViewModel *_videoControlsViewModel;
    SCOperaPlayerViewModel *_playerViewModel;
}

@property(readonly, copy, nonatomic) SCOperaPlayerViewModel *playerViewModel; // @synthesize playerViewModel=_playerViewModel;
@property(readonly, copy, nonatomic) SCOperaVideoControlsViewModel *videoControlsViewModel; // @synthesize videoControlsViewModel=_videoControlsViewModel;
@property(readonly, copy, nonatomic) NSArray *attributedCaptions; // @synthesize attributedCaptions=_attributedCaptions;
@property(readonly, nonatomic) _Bool showActivityIndicator; // @synthesize showActivityIndicator=_showActivityIndicator;
@property(readonly, nonatomic) _Bool hideFirstFrameImageView; // @synthesize hideFirstFrameImageView=_hideFirstFrameImageView;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHideFirstFrameImageView:(_Bool)arg1 showActivityIndicator:(_Bool)arg2 attributedCaptions:(id)arg3 videoControlsViewModel:(id)arg4 playerViewModel:(id)arg5;

@end

