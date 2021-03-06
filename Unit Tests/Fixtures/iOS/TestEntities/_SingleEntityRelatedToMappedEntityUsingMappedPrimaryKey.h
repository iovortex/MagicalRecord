// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to SingleEntityRelatedToMappedEntityUsingMappedPrimaryKey.h instead.

#import <CoreData/CoreData.h>


@class MappedEntity;


@interface SingleEntityRelatedToMappedEntityUsingMappedPrimaryKeyID : NSManagedObjectID {}
@end

@interface _SingleEntityRelatedToMappedEntityUsingMappedPrimaryKey : NSManagedObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (SingleEntityRelatedToMappedEntityUsingMappedPrimaryKeyID*)objectID;




@property (nonatomic, retain) MappedEntity* mappedEntity;
//- (BOOL)validateMappedEntity:(id*)value_ error:(NSError**)error_;




@end

@interface _SingleEntityRelatedToMappedEntityUsingMappedPrimaryKey (CoreDataGeneratedAccessors)

@end

@interface _SingleEntityRelatedToMappedEntityUsingMappedPrimaryKey (CoreDataGeneratedPrimitiveAccessors)



- (MappedEntity*)primitiveMappedEntity;
- (void)setPrimitiveMappedEntity:(MappedEntity*)value;


@end
