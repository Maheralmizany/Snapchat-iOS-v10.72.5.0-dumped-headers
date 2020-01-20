//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSAttributedString, SCLensFeedLensInfoLayout, UILabel;

@interface SCLensExplorerLensInfoView : UIView
{
    SCLensFeedLensInfoLayout *_layout;
    UILabel *_lensNameLabel;
    UILabel *_creatorLabel;
    NSAttributedString *_lensName;
    NSAttributedString *_creatorName;
}

@property(retain, nonatomic) NSAttributedString *creatorName; // @synthesize creatorName=_creatorName;
@property(retain, nonatomic) NSAttributedString *lensName; // @synthesize lensName=_lensName;
- (void).cxx_destruct;
- (void)_prepareCreatorLabel;
- (void)_prepareLensNameLabel;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

