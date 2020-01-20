//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCQueuePerformer;

@interface SCAuthTokenManager : NSObject
{
    SCQueuePerformer *_performer;
    NSString *_currentToken;
}

+ (id)shared;
+ (id)path;
@property(copy) NSString *currentToken; // @synthesize currentToken=_currentToken;
- (void).cxx_destruct;
- (void)_writeCurrentTokenToKeychain;
- (id)_readFromKeychain;
- (_Bool)_writeCurrentTokenToArchive;
- (id)_readFromArchive;
- (void)_loadAuthToken;
- (void)_persistCurrentToken;
- (id)authToken;
- (void)clear;
- (void)setWithNewToken:(id)arg1;
- (void)migrateFrom:(id)arg1;
- (id)init;

@end

