//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SCArcadiaCategoryBuilder : NSObject
{
    NSString *_title;
    NSString *_tag;
    unsigned long long _count;
    _Bool _hasMore;
}

+ (id)withArcadiaCategory:(id)arg1;
- (void).cxx_destruct;
- (id)setHasMore:(_Bool)arg1;
- (id)setCount:(unsigned long long)arg1;
- (id)setTag:(id)arg1;
- (id)setTitle:(id)arg1;
- (id)build;

@end

