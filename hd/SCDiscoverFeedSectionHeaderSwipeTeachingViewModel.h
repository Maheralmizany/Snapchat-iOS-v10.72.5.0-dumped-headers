//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSAttributedString;

@interface SCDiscoverFeedSectionHeaderSwipeTeachingViewModel : NSObject <NSCopying>
{
    _Bool _useAnimation;
    NSAttributedString *_titleText;
    double _rightMargin;
}

@property(readonly, nonatomic) _Bool useAnimation; // @synthesize useAnimation=_useAnimation;
@property(readonly, nonatomic) double rightMargin; // @synthesize rightMargin=_rightMargin;
@property(readonly, copy, nonatomic) NSAttributedString *titleText; // @synthesize titleText=_titleText;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitleText:(id)arg1 rightMargin:(double)arg2 useAnimation:(_Bool)arg3;

@end

