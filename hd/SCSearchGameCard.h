//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCSearchGameCard : NSObject <NSCopying>
{
    int _minPlayers;
    int _maxPlayers;
    NSString *_gameId;
    NSString *_displayName;
    NSString *_gameDescription;
    NSString *_iconImageUrl;
    NSString *_loadingPageImageUrl;
    NSString *_logoImageUrl;
    NSString *_contentUrl;
}

@property(readonly, nonatomic) int maxPlayers; // @synthesize maxPlayers=_maxPlayers;
@property(readonly, nonatomic) int minPlayers; // @synthesize minPlayers=_minPlayers;
@property(readonly, copy, nonatomic) NSString *contentUrl; // @synthesize contentUrl=_contentUrl;
@property(readonly, copy, nonatomic) NSString *logoImageUrl; // @synthesize logoImageUrl=_logoImageUrl;
@property(readonly, copy, nonatomic) NSString *loadingPageImageUrl; // @synthesize loadingPageImageUrl=_loadingPageImageUrl;
@property(readonly, copy, nonatomic) NSString *iconImageUrl; // @synthesize iconImageUrl=_iconImageUrl;
@property(readonly, copy, nonatomic) NSString *gameDescription; // @synthesize gameDescription=_gameDescription;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *gameId; // @synthesize gameId=_gameId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithGameId:(id)arg1 displayName:(id)arg2 gameDescription:(id)arg3 iconImageUrl:(id)arg4 loadingPageImageUrl:(id)arg5 logoImageUrl:(id)arg6 contentUrl:(id)arg7 minPlayers:(int)arg8 maxPlayers:(int)arg9;

@end

