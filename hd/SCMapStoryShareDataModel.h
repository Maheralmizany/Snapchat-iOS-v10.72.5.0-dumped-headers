//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCMapStoryShareDataModel : NSObject <NSCopying>
{
    NSString *_poiId;
    NSString *_additionalText;
}

@property(readonly, copy, nonatomic) NSString *additionalText; // @synthesize additionalText=_additionalText;
@property(readonly, copy, nonatomic) NSString *poiId; // @synthesize poiId=_poiId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPoiId:(id)arg1 additionalText:(id)arg2;

@end

