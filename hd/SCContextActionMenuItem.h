//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCContextActionMenuItem_CopyToClipboardAction, SCContextAppLink;

@interface SCContextActionMenuItem : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int actionOneOfCase; // @dynamic actionOneOfCase;
@property(copy, nonatomic) NSString *actionText; // @dynamic actionText;
@property(retain, nonatomic) SCContextActionMenuItem_CopyToClipboardAction *copyToClipboard; // @dynamic copyToClipboard;
@property(retain, nonatomic) SCContextAppLink *openApp; // @dynamic openApp;

@end

