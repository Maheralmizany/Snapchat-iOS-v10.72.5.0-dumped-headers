//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface SCConversationMediaDimensionInfo : NSObject <NSCopying>
{
    double _width;
    double _height;
}

@property(readonly, nonatomic) double height; // @synthesize height=_height;
@property(readonly, nonatomic) double width; // @synthesize width=_width;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithWidth:(double)arg1 height:(double)arg2;

@end
