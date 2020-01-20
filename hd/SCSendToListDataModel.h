//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSString;

@interface SCSendToListDataModel : NSObject <NSCopying, NSCoding>
{
    NSString *_listId;
    NSString *_name;
    NSArray *_snapchatterDisplayNames;
    NSArray *_groupDisplayNames;
    NSArray *_snapchatterUserIds;
    NSArray *_groupIds;
}

@property(readonly, copy, nonatomic) NSArray *groupIds; // @synthesize groupIds=_groupIds;
@property(readonly, copy, nonatomic) NSArray *snapchatterUserIds; // @synthesize snapchatterUserIds=_snapchatterUserIds;
@property(readonly, copy, nonatomic) NSArray *groupDisplayNames; // @synthesize groupDisplayNames=_groupDisplayNames;
@property(readonly, copy, nonatomic) NSArray *snapchatterDisplayNames; // @synthesize snapchatterDisplayNames=_snapchatterDisplayNames;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *listId; // @synthesize listId=_listId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithListId:(id)arg1 name:(id)arg2 snapchatterDisplayNames:(id)arg3 groupDisplayNames:(id)arg4 snapchatterUserIds:(id)arg5 groupIds:(id)arg6;
- (id)initWithCoder:(id)arg1;

@end

