//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class UIColor;

@interface SCAddFriendsHeaderScrollShadowViewModel : NSObject <NSCopying>
{
    double _radius;
    UIColor *_shadowColor;
    struct CGSize _offset;
}

@property(readonly, copy, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(readonly, nonatomic) double radius; // @synthesize radius=_radius;
@property(readonly, nonatomic) struct CGSize offset; // @synthesize offset=_offset;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOffset:(struct CGSize)arg1 radius:(double)arg2 shadowColor:(id)arg3;

@end
