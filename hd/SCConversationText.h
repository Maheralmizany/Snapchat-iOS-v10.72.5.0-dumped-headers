//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSString;

@interface SCConversationText : NSObject <NSCopying>
{
    NSString *_text;
    NSArray *_textAttributes;
    NSArray *_mediaCardAttributes;
}

@property(readonly, copy, nonatomic) NSArray *mediaCardAttributes; // @synthesize mediaCardAttributes=_mediaCardAttributes;
@property(readonly, copy, nonatomic) NSArray *textAttributes; // @synthesize textAttributes=_textAttributes;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithText:(id)arg1 textAttributes:(id)arg2 mediaCardAttributes:(id)arg3;

@end

