//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSString;

@interface SCSearchV2GameInfo : SCComposerMarshallableObject
{
    NSString *_gameId;
    NSString *_displayName;
    NSString *_loadingPageImageUrl;
    NSString *_logoUrl;
    NSString *_iconUrl;
    NSString *_contentUrl;
}

@property(copy, nonatomic) NSString *contentUrl; // @synthesize contentUrl=_contentUrl;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(copy, nonatomic) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
@property(copy, nonatomic) NSString *loadingPageImageUrl; // @synthesize loadingPageImageUrl=_loadingPageImageUrl;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *gameId; // @synthesize gameId=_gameId;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithGameId:(id)arg1 displayName:(id)arg2 loadingPageImageUrl:(id)arg3 logoUrl:(id)arg4 iconUrl:(id)arg5 contentUrl:(id)arg6;

@end

