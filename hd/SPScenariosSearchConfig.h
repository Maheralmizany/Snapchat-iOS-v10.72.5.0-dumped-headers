//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary;

@interface SPScenariosSearchConfig : NSObject
{
    NSArray *_tagPriorities;
    NSArray *_emptyQueryTags;
    NSDictionary *_scenarios;
}

@property(readonly, copy, nonatomic) NSDictionary *scenarios; // @synthesize scenarios=_scenarios;
@property(readonly, copy, nonatomic) NSArray *emptyQueryTags; // @synthesize emptyQueryTags=_emptyQueryTags;
@property(readonly, copy, nonatomic) NSArray *tagPriorities; // @synthesize tagPriorities=_tagPriorities;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

