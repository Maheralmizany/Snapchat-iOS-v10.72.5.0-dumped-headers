//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AIText, NSArray, SSTopic;

@interface SSSearchResult : NSObject
{
    NSArray *_scenarios;
    NSArray *_tagsToShow;
    SSTopic *_searchTopic;
    AIText *_printableText;
    NSArray *_scenarioIds;
}

@property(readonly, nonatomic) NSArray *scenarioIds; // @synthesize scenarioIds=_scenarioIds;
@property(readonly, nonatomic) AIText *printableText; // @synthesize printableText=_printableText;
@property(readonly, nonatomic) SSTopic *searchTopic; // @synthesize searchTopic=_searchTopic;
@property(readonly, nonatomic) NSArray *tagsToShow; // @synthesize tagsToShow=_tagsToShow;
@property(readonly, nonatomic) NSArray *scenarios; // @synthesize scenarios=_scenarios;
- (void).cxx_destruct;
- (id)initWithScenarios:(id)arg1 tagsToShow:(id)arg2 printableText:(id)arg3 scenarioIds:(id)arg4 searchTopic:(id)arg5;

@end

