//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface SCDiscoverFeedClientScoringParams : NSObject <NSCopying, NSCoding>
{
    _Bool _shouldReorderLocally;
    float _meanStoryScore;
    float _storyScoreVariance;
    float _ageDecayWeight;
    NSString *_astVersion;
}

@property(readonly, nonatomic) _Bool shouldReorderLocally; // @synthesize shouldReorderLocally=_shouldReorderLocally;
@property(readonly, nonatomic) float ageDecayWeight; // @synthesize ageDecayWeight=_ageDecayWeight;
@property(readonly, nonatomic) float storyScoreVariance; // @synthesize storyScoreVariance=_storyScoreVariance;
@property(readonly, nonatomic) float meanStoryScore; // @synthesize meanStoryScore=_meanStoryScore;
@property(readonly, copy, nonatomic) NSString *astVersion; // @synthesize astVersion=_astVersion;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAstVersion:(id)arg1 meanStoryScore:(float)arg2 storyScoreVariance:(float)arg3 ageDecayWeight:(float)arg4 shouldReorderLocally:(_Bool)arg5;

@end

