//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCBitmojiMerchSaleBadgeExperimentContext : SCExperimentContext
{
    _Bool _saleBadgeEnabled;
    _Bool _saleBadgeRed;
}

@property(readonly, nonatomic) _Bool saleBadgeRed; // @synthesize saleBadgeRed=_saleBadgeRed;
@property(readonly, nonatomic) _Bool saleBadgeEnabled; // @synthesize saleBadgeEnabled=_saleBadgeEnabled;
- (void)setupParameters;
- (id)experimentName;

@end

