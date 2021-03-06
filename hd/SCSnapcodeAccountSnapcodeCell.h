//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCSnapcodeCell.h"

@class NSString, SCScannableInfo, SCSnapcodeView, SCUserSession, UIImageView, UILabel, UIView;

@interface SCSnapcodeAccountSnapcodeCell : SCSnapcodeCell
{
    UILabel *_displayNameLabel;
    SCSnapcodeView *_snapcodeView;
    double _initialHeight;
    UIView *_thumbnailContainer;
    NSString *_svgSnapcodeGhost;
    UIImageView *_forwardIndicatorView;
    SCScannableInfo *_userInfoScannable;
    SCUserSession *_userSession;
    id <SCSnapcodeCellDelegate> _navDelegate;
}

@property(nonatomic) __weak id <SCSnapcodeCellDelegate> navDelegate; // @synthesize navDelegate=_navDelegate;
- (void).cxx_destruct;
- (struct UIEdgeInsets)layoutMargins;
- (id)scannableInfo;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)tapGestureDetected:(id)arg1;
- (id)cellSnapcodeDetailViewWithSize:(double)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 userSession:(id)arg3;

@end

