//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSArray, NSString;

@interface SCSendToListEditMenuModel : SCComposerMarshallableObject
{
    NSString *_listId;
    NSString *_name;
    NSArray *_snapchatterDisplayNames;
    NSArray *_groupDisplayNames;
}

@property(copy, nonatomic) NSArray *groupDisplayNames; // @synthesize groupDisplayNames=_groupDisplayNames;
@property(copy, nonatomic) NSArray *snapchatterDisplayNames; // @synthesize snapchatterDisplayNames=_snapchatterDisplayNames;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *listId; // @synthesize listId=_listId;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithListId:(id)arg1 name:(id)arg2 snapchatterDisplayNames:(id)arg3 groupDisplayNames:(id)arg4;

@end
