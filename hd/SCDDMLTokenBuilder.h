//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface SCDDMLTokenBuilder : NSObject
{
    NSString *_token;
    NSDate *_expiration;
}

+ (id)withDDMLToken:(id)arg1;
- (void).cxx_destruct;
- (id)setExpiration:(id)arg1;
- (id)setToken:(id)arg1;
- (id)build;

@end
