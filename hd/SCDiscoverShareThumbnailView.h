//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCChatSingleMediaThumbnailView.h"

@class NSString, SCBaseMediaThumbnailView, UILabel;

@interface SCDiscoverShareThumbnailView : UIView <SCChatSingleMediaThumbnailView>
{
    UILabel *_unviewableLabel;
    id <SCChatFullscreenMediaChatTableCellDelegate> _delegate;
    SCBaseMediaThumbnailView *_baseMediaThumbnailView;
    NSString *_mediaId;
}

@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(readonly, nonatomic) SCBaseMediaThumbnailView *baseMediaThumbnailView; // @synthesize baseMediaThumbnailView=_baseMediaThumbnailView;
- (void).cxx_destruct;
- (_Bool)isAccessibilityElement;
- (void)resetWithOriginalSettings;
- (void)rerenderForActionMenuWithBoundingSize:(struct CGSize)arg1;
- (id)attributedTextForUnviewableLabel;
- (void)pauseVideo;
- (void)resumeVideo;
- (void)prepareVideoIfNecessary;
- (_Bool)fullScreenIsShown;
- (void)dismissFullScreenView;
- (void)resetPlayer;
- (void)resetContents;
- (struct CGSize)thumbnailSize;
- (void)setThumbnailSize:(struct CGSize)arg1;
- (void)setMediaViewModel:(id)arg1;
- (id)unviewableLabel;
- (void)_initBaseMediaThumbnailViewWithParentVC:(id)arg1 delegate:(id)arg2;
- (id)initWithParentVC:(id)arg1 delegate:(id)arg2;

@end

