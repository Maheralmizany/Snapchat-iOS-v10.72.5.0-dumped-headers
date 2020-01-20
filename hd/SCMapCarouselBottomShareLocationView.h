//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, NSString, UIButton, UIImageView, UILabel;

@interface SCMapCarouselBottomShareLocationView : UIView
{
    UILabel *_label;
    CALayer *_separatorLayer;
    UIButton *_dismissButton;
    UIImageView *_xButton;
    UIImageView *_shareLocationPin;
    NSString *_friendName;
    CDUnknownBlockType _onTap;
    id <SCMapCarouselShareLocationDelegate> _delegate;
}

@property(nonatomic) __weak id <SCMapCarouselShareLocationDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType onTap; // @synthesize onTap=_onTap;
- (void).cxx_destruct;
- (void)tappedDismiss;
- (void)onTap:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(readonly, copy, nonatomic) NSString *friendName;
- (id)initWithFrame:(struct CGRect)arg1 friendName:(id)arg2;

@end

