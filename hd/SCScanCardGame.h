//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCScanCardTableViewCell.h"

#import "SCScanCardGameDeepLinkProtocol.h"

@class NSString, SCNetworkImageView, SCScanCardButton, SOJUScannableActionGame, UILabel, UIView;

@interface SCScanCardGame : SCScanCardTableViewCell <SCScanCardGameDeepLinkProtocol>
{
    SCNetworkImageView *_thumbnailImageView;
    UILabel *_titleLabel;
    SCScanCardButton *_playButton;
    SCScanCardButton *_cancelButton;
    UIView *_headerBackgroundView;
    SOJUScannableActionGame *_gameMetadata;
    id <SCScanCardGameDeepLinkDelegate> _gameDeepLinkDelegate;
}

@property(nonatomic) __weak id <SCScanCardGameDeepLinkDelegate> gameDeepLinkDelegate; // @synthesize gameDeepLinkDelegate=_gameDeepLinkDelegate;
- (void).cxx_destruct;
- (void)_didTapPlayButton;
- (void)_didTapCancelButton;
- (void)updateStyle;
- (void)transitionToContentAnimated:(_Bool)arg1;
- (id)initWithGameMetadata:(id)arg1 imageDownloader:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

