//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSURL;

@interface SCChatTextFormatAttributeContents : NSObject <NSCopying>
{
    unsigned long long _subtype;
    unsigned long long _format_type;
    NSURL *_url_url;
}

+ (id)urlWithUrl:(id)arg1;
+ (id)formatWithType:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)matchFormat:(CDUnknownBlockType)arg1 url:(CDUnknownBlockType)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
