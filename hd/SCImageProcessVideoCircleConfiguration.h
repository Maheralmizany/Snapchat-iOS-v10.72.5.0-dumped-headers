//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class UIColor;

@interface SCImageProcessVideoCircleConfiguration : NSObject <NSCopying>
{
    _Bool _mask;
    _Bool _renderWithoutEdits;
    UIColor *_color;
    double _padding;
}

@property(readonly, nonatomic) _Bool renderWithoutEdits; // @synthesize renderWithoutEdits=_renderWithoutEdits;
@property(readonly, nonatomic) double padding; // @synthesize padding=_padding;
@property(readonly, nonatomic) _Bool mask; // @synthesize mask=_mask;
@property(readonly, copy, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithColor:(id)arg1 mask:(_Bool)arg2 padding:(double)arg3 renderWithoutEdits:(_Bool)arg4;

@end

