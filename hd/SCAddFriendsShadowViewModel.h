//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class UIColor;

@interface SCAddFriendsShadowViewModel : NSObject <NSCopying>
{
    float _opacity;
    double _radius;
    UIColor *_color;
    struct CGSize _offset;
}

@property(readonly, nonatomic) float opacity; // @synthesize opacity=_opacity;
@property(readonly, copy, nonatomic) UIColor *color; // @synthesize color=_color;
@property(readonly, nonatomic) double radius; // @synthesize radius=_radius;
@property(readonly, nonatomic) struct CGSize offset; // @synthesize offset=_offset;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOffset:(struct CGSize)arg1 radius:(double)arg2 color:(id)arg3 opacity:(float)arg4;

@end
