//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCMiniProfileCollectionViewCell.h"

@class NSString, UILabel;

@interface SCMiniProfileFooterCollectionViewCell : SCMiniProfileCollectionViewCell
{
    UILabel *_label;
    NSString *_text;
    long long _style;
}

@property(nonatomic) long long style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

