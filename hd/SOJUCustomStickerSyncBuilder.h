//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface SOJUCustomStickerSyncBuilder : NSObject
{
    NSArray *_creationList;
    NSArray *_deletionList;
}

+ (id)withJUCustomStickerSync:(id)arg1;
- (void).cxx_destruct;
- (id)setDeletionList:(id)arg1;
- (id)setCreationList:(id)arg1;
- (id)build;

@end
