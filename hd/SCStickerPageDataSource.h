//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray;

@interface SCStickerPageDataSource : NSObject <NSCopying>
{
    NSArray *_stickers;
    id <SCBloopsPickerDataSource> _bloopsDataSource;
}

@property(readonly, nonatomic) id <SCBloopsPickerDataSource> bloopsDataSource; // @synthesize bloopsDataSource=_bloopsDataSource;
@property(readonly, copy, nonatomic) NSArray *stickers; // @synthesize stickers=_stickers;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStickers:(id)arg1 bloopsDataSource:(id)arg2;

@end

