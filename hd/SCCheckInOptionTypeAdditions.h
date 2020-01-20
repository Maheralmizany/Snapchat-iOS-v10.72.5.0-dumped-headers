//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCCheckInOptionTypeAdditions : NSObject <NSCopying>
{
    unsigned long long _subtype;
    NSString *_venue_categoryId;
    NSString *_venue_iconURL;
    NSString *_venue_locality;
    _Bool _venue_isSuggested;
    NSString *_custom_prefix;
}

+ (id)venueWithCategoryId:(id)arg1 iconURL:(id)arg2 locality:(id)arg3 isSuggested:(_Bool)arg4;
+ (id)customWithPrefix:(id)arg1;
+ (id)actionmoji;
- (void).cxx_destruct;
- (void)matchVenue:(CDUnknownBlockType)arg1 custom:(CDUnknownBlockType)arg2 actionmoji:(CDUnknownBlockType)arg3;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
