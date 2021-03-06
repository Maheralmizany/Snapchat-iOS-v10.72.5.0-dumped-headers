//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCSearchCollectionViewCell.h"

@class NSString, SCExpandedButton, UILabel;

@interface SCSendToStaticMessageCell : SCSearchCollectionViewCell
{
    UILabel *_messageLabel;
    SCExpandedButton *_learnMoreButton;
    NSString *_alertMessage;
    NSString *_sectionName;
    _Bool _shouldEnableV11Theme;
}

+ (struct CGSize)sizeWithMessage:(id)arg1 constrainedToSize:(struct CGSize)arg2;
@property(retain, nonatomic) NSString *sectionName; // @synthesize sectionName=_sectionName;
@property(nonatomic) _Bool shouldEnableV11Theme; // @synthesize shouldEnableV11Theme=_shouldEnableV11Theme;
- (void).cxx_destruct;
- (void)learnMoreButtonTapped:(id)arg1;
@property(retain, nonatomic) NSString *message;
- (id)initWithFrame:(struct CGRect)arg1;

@end

