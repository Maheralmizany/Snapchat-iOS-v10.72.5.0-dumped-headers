//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCR2Ast_AppVersion, SCR2Node;

@interface SCR2Ast : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMinAppVersion; // @dynamic hasMinAppVersion;
@property(nonatomic) _Bool hasRoot; // @dynamic hasRoot;
@property(nonatomic) _Bool isProd; // @dynamic isProd;
@property(retain, nonatomic) SCR2Ast_AppVersion *minAppVersion; // @dynamic minAppVersion;
@property(retain, nonatomic) SCR2Node *root; // @dynamic root;
@property(nonatomic) int targetPage; // @dynamic targetPage;
@property(copy, nonatomic) NSString *versionId; // @dynamic versionId;

@end

