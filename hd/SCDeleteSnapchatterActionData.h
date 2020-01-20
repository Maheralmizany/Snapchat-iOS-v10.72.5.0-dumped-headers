//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSIndexPath, SCSnapchatter;

@interface SCDeleteSnapchatterActionData : NSObject <NSCopying>
{
    _Bool _shouldShowAlertView;
    SCSnapchatter *_snapchatter;
    NSIndexPath *_indexPath;
    long long _deleteSource;
}

@property(readonly, nonatomic) _Bool shouldShowAlertView; // @synthesize shouldShowAlertView=_shouldShowAlertView;
@property(readonly, nonatomic) long long deleteSource; // @synthesize deleteSource=_deleteSource;
@property(readonly, copy, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(readonly, copy, nonatomic) SCSnapchatter *snapchatter; // @synthesize snapchatter=_snapchatter;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSnapchatter:(id)arg1 indexPath:(id)arg2 deleteSource:(long long)arg3 shouldShowAlertView:(_Bool)arg4;

@end
