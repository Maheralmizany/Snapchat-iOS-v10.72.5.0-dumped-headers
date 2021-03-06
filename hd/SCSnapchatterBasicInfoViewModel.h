//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSAttributedString, SCSnapchatterBadgeViewModel;

@interface SCSnapchatterBasicInfoViewModel : NSObject <NSCopying>
{
    NSAttributedString *_primaryLabelAttributedText;
    NSAttributedString *_secondaryLabelAttributedText;
    NSAttributedString *_tertiaryLabelAttributedText;
    double _primarySecondaryLabelPadding;
    double _secondaryTertiaryLabelPadding;
    SCSnapchatterBadgeViewModel *_badgeViewModel;
    struct UIEdgeInsets _contentInsets;
}

@property(readonly, copy, nonatomic) SCSnapchatterBadgeViewModel *badgeViewModel; // @synthesize badgeViewModel=_badgeViewModel;
@property(readonly, nonatomic) double secondaryTertiaryLabelPadding; // @synthesize secondaryTertiaryLabelPadding=_secondaryTertiaryLabelPadding;
@property(readonly, nonatomic) double primarySecondaryLabelPadding; // @synthesize primarySecondaryLabelPadding=_primarySecondaryLabelPadding;
@property(readonly, nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(readonly, copy, nonatomic) NSAttributedString *tertiaryLabelAttributedText; // @synthesize tertiaryLabelAttributedText=_tertiaryLabelAttributedText;
@property(readonly, copy, nonatomic) NSAttributedString *secondaryLabelAttributedText; // @synthesize secondaryLabelAttributedText=_secondaryLabelAttributedText;
@property(readonly, copy, nonatomic) NSAttributedString *primaryLabelAttributedText; // @synthesize primaryLabelAttributedText=_primaryLabelAttributedText;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPrimaryLabelAttributedText:(id)arg1 secondaryLabelAttributedText:(id)arg2 tertiaryLabelAttributedText:(id)arg3 contentInsets:(struct UIEdgeInsets)arg4 primarySecondaryLabelPadding:(double)arg5 secondaryTertiaryLabelPadding:(double)arg6 badgeViewModel:(id)arg7;

@end

