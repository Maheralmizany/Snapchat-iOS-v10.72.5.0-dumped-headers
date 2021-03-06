//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSObject<OS_dispatch_queue>, NSString, SCBloopsSearchResult, SCChatStickerFuzzySearchListenerAnnouncer, SCStickerCaptionRecommendationRanker, SCStickerTagFuzzySearch, SCUserSession;

@interface SCChatStickerFuzzySearch : NSObject
{
    NSString *_chatSearchText;
    NSString *_rawText;
    SCStickerTagFuzzySearch *_stickerTagFuzzySearch;
    SCStickerCaptionRecommendationRanker *_captionRanker;
    SCUserSession *_userSession;
    CDUnknownBlockType _logStickerSuggestionFromTextBlock;
    NSObject<OS_dispatch_queue> *_logQueue;
    id <SCPerforming> _performer;
    id <SCBloopsAPI> _bloopsAPI;
    SCBloopsSearchResult *_bloopsSearchResult;
    id <SCChatStickerFuzzySearchDelegate> _delegate;
    NSArray *_chatSearchResults;
    SCChatStickerFuzzySearchListenerAnnouncer *_announcer;
}

+ (_Bool)isChatTypeInSearchEnabled;
@property(readonly, nonatomic) SCChatStickerFuzzySearchListenerAnnouncer *announcer; // @synthesize announcer=_announcer;
@property(readonly, copy, nonatomic) NSArray *chatSearchResults; // @synthesize chatSearchResults=_chatSearchResults;
@property(nonatomic) __weak id <SCChatStickerFuzzySearchDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SCBloopsSearchResult *bloopsSearchResult; // @synthesize bloopsSearchResult=_bloopsSearchResult;
- (void).cxx_destruct;
- (void)_logStickerSuggestionFromText:(id)arg1 bloopsTopic:(id)arg2;
- (void)searchChatStickersWithFuzzyText:(id)arg1 searchSource:(long long)arg2;
- (void)_performBloopsSearchForQuery:(id)arg1 hasOtherResults:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_recommendChatStickersWithText:(id)arg1 rawChatSearchText:(id)arg2 searchSource:(long long)arg3 shouldIncludeFriendBitmoji:(_Bool)arg4;
- (id)initWithUserSession:(id)arg1;

@end

