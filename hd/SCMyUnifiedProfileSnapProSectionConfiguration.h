//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, NSValue;

@interface SCMyUnifiedProfileSnapProSectionConfiguration : NSObject <NSCopying>
{
    NSString *_businessId;
    NSString *_headerText;
    NSValue *_insets;
}

@property(readonly, copy, nonatomic) NSValue *insets; // @synthesize insets=_insets;
@property(readonly, copy, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
@property(readonly, copy, nonatomic) NSString *businessId; // @synthesize businessId=_businessId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBusinessId:(id)arg1 headerText:(id)arg2 insets:(id)arg3;

@end

