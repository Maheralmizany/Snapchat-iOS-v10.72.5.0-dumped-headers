//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class NSString, UILabel;

@interface SCMapTraySectionHeaderView : UICollectionReusableView
{
    UILabel *_sectionHeaderLabel;
    _Bool _useTopPadding;
    NSString *_headerText;
}

+ (double)heightWithText:(id)arg1 width:(double)arg2 useTopPadding:(_Bool)arg3;
@property(nonatomic) _Bool useTopPadding; // @synthesize useTopPadding=_useTopPadding;
@property(copy, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

