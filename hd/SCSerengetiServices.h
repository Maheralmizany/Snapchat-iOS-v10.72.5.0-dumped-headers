//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCLazy, SCSerengetiManager, SCSnapchatterServices;

@interface SCSerengetiServices : NSObject
{
    SCLazy *_serengetiManager;
    SCSnapchatterServices *_snapchatterServices;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SCSnapchatterServices *snapchatterServices;
@property(readonly, nonatomic) SCSerengetiManager *serengetiManager;
- (id)initWithSerengetiManager:(id)arg1 snapchatterServices:(id)arg2;

@end

