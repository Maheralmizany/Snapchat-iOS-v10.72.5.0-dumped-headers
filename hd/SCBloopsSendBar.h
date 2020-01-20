//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILayoutGuide;

@interface SCBloopsSendBar : UIView
{
    UILayoutGuide *_barLayoutGuide;
    UIButton *_sendButton;
    UIButton *_moreButton;
    UIButton *_exportButton;
    id <SCBloopsSendBarDelegate> _delegate;
}

@property(nonatomic) __weak id <SCBloopsSendBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)pressedExportButton;
- (void)pressedMoreButton;
- (void)pressedSendButton;
- (void)_initExportButton;
- (void)_initMoreButton;
- (void)_initSendButton;
- (void)_initBarLayoutGuide;
- (void)_setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

