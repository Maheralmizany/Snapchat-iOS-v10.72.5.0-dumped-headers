//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCScanCardTableViewCell.h"

@class SCScanCardButton, UIImageView, UILabel;

@interface SCUpdateRequiredForLensStudioCard : SCScanCardTableViewCell
{
    SCScanCardButton *_updateButton;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIImageView *_headerImageView;
    id <SCCrossApplicationRouter> _crossAppRouter;
}

- (void).cxx_destruct;
- (id)_updateButton;
- (void)_dismiss;
- (void)_updateButtonTapped;
- (struct CGSize)preferredSize;
- (void)updateStyle;
- (id)initWithCrossApplicationRouter:(id)arg1;

@end

